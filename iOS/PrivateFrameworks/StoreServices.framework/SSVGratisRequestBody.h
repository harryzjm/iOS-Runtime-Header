//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSNumber;

@interface SSVGratisRequestBody : NSObject <NSCopying>
{
    NSNumber *_accountID;
    NSMutableDictionary *_additionalParameters;
    NSArray *_applications;
    _Bool _backgroundRequest;
    NSArray *_bundleIdentifiers;
    NSArray *_itemIdentifiers;
    long long _style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long requestStyle; // @synthesize requestStyle=_style;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic, getter=isBackgroundRequest) _Bool backgroundRequest; // @synthesize backgroundRequest=_backgroundRequest;
@property(copy, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forBodyParameter:(id)arg2;
@property(readonly, nonatomic) NSData *propertyListBodyData;
@property(readonly, nonatomic) NSData *JSONBodyData;
@property(readonly, nonatomic) NSMutableDictionary *bodyDictionary;
- (id)initWithRequestStyle:(long long)arg1;

@end
