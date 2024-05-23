<script setup lang="ts">
const {data: header} = await useFetch('http://localhost:5555/header')
</script>

<template>
    <div>
        <h1>{{ header }}</h1>
        <NuxtWelcome />
    </div>
</template>

