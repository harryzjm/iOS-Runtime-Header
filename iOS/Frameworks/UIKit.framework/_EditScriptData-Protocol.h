//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol _EditScriptData;

@protocol _EditScriptData <NSObject>
+ (id <_EditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id <_EditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_EditScriptData>)arg1 shouldReverseIterate:(_Bool)arg2;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringValue;
- (NSString *)stringAtIndex:(long long)arg1;
- (long long)length;
@end

