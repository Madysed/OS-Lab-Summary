document.getElementById('fetchBtn').addEventListener('click', async () => {
    try {
        const response = await fetch('http://localhost:3000/api');
        const data = await response.json();
        document.getElementById('result').textContent = data.message;
    } catch (error) {
        console.error('Error:', error);
    }
});