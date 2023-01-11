//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKDispatchAfterHandler : NSObject
{
    NSMutableDictionary *_identifierBlockMap;
}

+ (id)appLifeCycleHandler;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *identifierBlockMap; // @synthesize identifierBlockMap=_identifierBlockMap;
- (void)cancelAll;
- (void)cancelBlocksWithStringIdentifier:(id)arg1;
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)identifierForStringIdentifier:(id)arg1;
- (id)init;

@end
