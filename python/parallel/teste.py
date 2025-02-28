#!/usr/local/bin/python3.5
import asyncio
from aiohttp import ClientSession

async def hello(url):
    async with ClientSession() as session:
        async with session.get(url) as response:
            response = await response.read()
            print(response[:100])

loop = asyncio.get_event_loop()

loop.run_until_complete(hello("http://www.google.com"))
