//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCSParser : NSObject
{
}

+ (void)_fixEntitiesRelationshipForParseState:(id)arg1;
+ (unsigned long long)endVCSEntity:(id)arg1 withParseState:(id)arg2;
+ (unsigned long long)beginVCSEntity:(id)arg1 withParseState:(id)arg2;
+ (unsigned long long)decodeVCSLine:(id)arg1 withParseState:(id)arg2;
+ (id)parseVCSData:(id)arg1;
+ (id)parseVCSFile:(id)arg1;

@end
