// pages/index.js
import Head from 'next/head';

export default function Home() {
  return (
    <div>
      <Head>
        <title>Group App</title>
      </Head>
      <h1>Welcome to Group App</h1>
      <ul>
        <li>Group 1: Developer Name1</li>
        <li>Group 2: Developer Name2</li>
        {/* Developers add their names here via branches */}
      </ul>
    </div>
  );
}