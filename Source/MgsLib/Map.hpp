#pragma once

signed int CC Script_tbl_map_45151D(BYTE* pScript);
void CC Map_FreeHzdItems_44F38D();
void CC Map_ResetMapCountAndKmdsCount_44F3F7();
void CC Map_FreeKmds_44F3B5();

struct map_record;
void CC Map_LitLoad_44F53B(int resourceNameHashed, const map_record* pMapStruct);
