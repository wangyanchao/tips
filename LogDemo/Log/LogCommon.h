//
//  LogCommon.h
//  LogDemo
//
//  Created by wangyanchao on 2019/8/13.
//  Copyright © 2019 wangyanchao. All rights reserved.
//

#import "DDLog.h"
#import <CocoaLumberjack.h>

#ifndef LogCommon_h
#define LogCommon_h

#pragma mark - 定义

#define ZZLOG_MAYBE(enable, frmt, ...) \
do { if(lvl & flg) LOG_MACRO(async, lvl, flg, ctx, tag, fnct, frmt, ##__VA_ARGS__); } while(0)

// 只允许严重错误的时候使用
#define ZZLogError(frmt, ...) DDLogError(frmt, ##__VA_ARGS__)

// 只允许非预期分支需要打印警告的时候使用
#define ZZLogWarn(frmt, ...) DDLogWarn(frmt, ##__VA_ARGS__)

// 打印程序关键路径信息，少量使用
#define ZZLogInfo(module, frmt, ...) \
do { if (module) DDLogInfo(frmt, ##__VA_ARGS__); } while(0)

// 打印自己模块调试信息
#define ZZLogDebug(module, frmt, ...) \
do { if (module) DDLogDebug(frmt, ##__VA_ARGS__); } while(0)

// 打印冗余信息，比如server端返回JSON、循环打印的信息等
#define ZZLogVerbose(module, frmt, ...) \
do { if (module) DDLogVerbose(frmt, ##__VA_ARGS__); } while(0)


#endif /* LogCommon_h */
