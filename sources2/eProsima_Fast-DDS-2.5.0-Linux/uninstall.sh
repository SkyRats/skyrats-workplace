rm -rf /usr/local/share/fastcdr
rm -rf /usr/local/include/fastcdr
rm -rf /usr/local/lib/cmake/fastcdr
rm /usr/local/lib/libfastcdr.so*
rm /usr/local/lib/libfastcdr.a

rm -rf /usr/local/share/fastrtps
rm -rf /usr/local/include/fastrtps
rm -rf /usr/local/include/fastdds
rm -rf /usr/local/tools/fastdds
if [ -z "$(ls -A /usr/local/tools)" ]; then
    rm -rf /usr/local/tools
fi
rm /usr/local/lib/libfastrtps.so*
rm /usr/local/lib/libfastrtps.a
rm /usr/local/bin/fastdds
rm /usr/local/bin/fast-discovery-server*
rm /usr/local/bin/nodesize_dbg
rm /usr/local/bin/ros-discovery

rm -rf /usr/local/share/foonathan_memory
rm -rf /usr/local/share/foonathan_memory_vendor
rm -rf /usr/local/include/foonathan_memory
rm -rf /usr/local/lib/foonathan_memory
rm /usr/local/lib/libfoonathan_memory*

rm /usr/local/bin/fastddsgen
rm -rf /usr/local/share/fastddsgen
