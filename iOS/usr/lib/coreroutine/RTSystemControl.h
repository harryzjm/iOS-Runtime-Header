//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTSystemControl : NSObject
{
}

+ (unsigned long long)sysctlByName:(id)arg1;
+ (id)valueForMib:(int *)arg1 miblen:(int)arg2;
+ (id)valueForKey:(id)arg1;

@end

