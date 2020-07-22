//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol SGIntervalTreeProtocol <JSExport>
- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)remove:(NSString *)arg1;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3;
- (id)init;

@optional
- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2 __JS_EXPORT_AS__query:(id)arg3;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3 __JS_EXPORT_AS__store:(id)arg4;
@end
