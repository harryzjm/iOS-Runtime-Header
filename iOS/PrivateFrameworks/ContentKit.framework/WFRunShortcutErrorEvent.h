//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFRunShortcutErrorEvent
{
    NSString *_key;
    NSString *_actionName;
    NSString *_errorDomain;
    NSString *_errorCode;
}

+ (Class)codableEventClass;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
