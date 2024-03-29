//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNPlistUtils : NSObject
{
}

+ (id)safePlistArrayFromItemsInSerializableCollection:(id)arg1 error:(id *)arg2;
+ (id)plistArrayFromItemsInSerializableCollection:(id)arg1 error:(id *)arg2;
+ (_Bool)validateAllItemsArePlistSerializableInCollection:(id)arg1 error:(id *)arg2;
+ (_Bool)checkAllItemsArePlistSerializableInCollection:(id)arg1;
+ (CDStruct_e83c9415)CMTimeRangeFromPlist:(id)arg1;
+ (id)plistFromCMTimeRange:(CDStruct_e83c9415)arg1;
+ (CDStruct_1b6d18a9)CMTimeFromPlist:(id)arg1;
+ (id)plistFromCMTime:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end

