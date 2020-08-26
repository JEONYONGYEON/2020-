int add_fast(size_t hash_key, const char* value)
{
	size_t i;
	size_t start_index;
	
	start_index = hash_key % BUCKET_SIZE;
	i = start_index;
	
	do{
		if(s_keys[i] == INT_MIN){
			/* 새 해시- 값 삽입 */
			return TURE;
		}
	
	if(s_keys[i] == hash_key) {
	    	return TRUE;
    	}
	
	    i = (i + 1) % BUCKET_SIZE;
	
    } while (i != start_index);

return FALSE;
}
