//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDCommunicatorHelper : NSObject
{
}

+ (id)sharedInstance;
- (unsigned long long)highestCommonVersionFor:(id)arg1 and:(id)arg2;
- (id)getOldThermalValueForNewValue:(id)arg1;
- (id)getNewThermalValueForOldValue:(id)arg1;

@end
