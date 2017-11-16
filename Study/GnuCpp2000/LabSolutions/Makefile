all:
	make act22
	make act107
	make act109
	make act_char_array
	make act_con_streams
	make act_debug
	make act_dumper
	make act_factory
	make act_filelog
	make act_FlightTest
	make act_inline
	make act_line
	make act_calc
	make act_ofif_data
	make act_str_to_mem
	make act_UserInfo
	make act_mod
	make main

main:
	c++ -I../Headers main.cpp -o main.run -std=c++11
	exec "./main.run"
act_filelog:
	c++ -I../Headers ./act_filelog.cpp ././act_filelog_test.cpp -o act_filelog.run -std=c++11
act22:
	c++ -I../Headers ./act22_default_params.cpp -o act22.run -std=c++11
act107:
	c++ -I../Headers ./act107_con_name_email.cpp -o act107.run -std=c++11
act109:
	c++ -I../Headers ./act109_con_name_email.cpp -o act109.run -std=c++11
act143:
	c++ -I../Headers ./act143_UserData.cpp -o act143.run -std=c++11
act146:
	c++ -I../Headers ./act146_UserData.cpp -o act146.run -std=c++11
act149:
	c++ -I../Headers ./act149_UserData.cpp -o act149.run -std=c++11
act_mod:
	c++ -I../Headers ./act_mod.cpp -o act_mod.run -std=c++11
act_calc:
	c++ -I../Headers ./act_calc.cpp -o act_calc.run -std=c++11
act_char_array:
	c++ -I../Headers ./act_char_array.cpp -o act_char_array.run -std=c++11
act_con_streams:
	c++ -I../Headers ./act_con_streams.cpp -o act_con_streams.run -std=c++11
act_debug:
	c++ -I../Headers ./act_debug.cpp -o act_debug.run -std=c++11
act_dumper:
	c++ -I../Headers ./act_dumper.cpp -o act_dumper.run -std=c++11
act_factory:
	c++ -I../Headers ./act_factory.cpp -o act_factory.run -std=c++11
act_FlightTest:
	c++ -I../Headers ./act_FlightTest.cpp -o act_FlightTest.run -std=c++11
act_inline:
	c++ -I../Headers ./act_inline.cpp -o act_inline.run -std=c++11
act_line:
	c++ -I../Headers ./act_line.cpp -o act_line.run -std=c++11
act_ofif_data:
	c++ -I../Headers ./act_ofif_data.cpp -o act_ofif_data.run -std=c++11
act_str_to_mem:
	c++ -I../Headers ./act_str_to_mem.cpp -o act_str_to_mem.run -std=c++11
act_UserInfo:
	c++ -I../Headers ./act_UserInfo.cpp -o act_UserInfo.run -std=c++11
act_ezlog:
	c++ -I../Headers ./act_EzLog.cpp -o EzLog.run -std=c++11
clean:
	rm -f *.o
	rm -f *.run
	rm -f *.out
	chmod 666 *.?pp

