//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface FPUIAction : NSObject
{
    _Bool _displayInline;
    NSString *_uiActionProviderIdentifier;
    NSString *_identifier;
    NSString *_displayName;
    NSPredicate *_predicate;
}

@property(readonly, nonatomic) _Bool displayInline; // @synthesize displayInline=_displayInline;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *uiActionProviderIdentifier; // @synthesize uiActionProviderIdentifier=_uiActionProviderIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(_Bool)arg5;

@end
