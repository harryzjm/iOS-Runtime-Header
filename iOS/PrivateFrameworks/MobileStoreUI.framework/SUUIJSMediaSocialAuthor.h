//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SUUIMediaSocialAuthor;

__attribute__((visibility("hidden")))
@interface SUUIJSMediaSocialAuthor : NSObject
{
    SUUIMediaSocialAuthor *_mediaSocialAuthor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *storePlatformData;
@property(readonly, nonatomic) NSArray *permissions;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *entityType;
@property(readonly, nonatomic) NSString *entityIdentifier;
@property(readonly, nonatomic) NSString *dsId;
- (id)initWithSUUIMediaSocialAuthor:(id)arg1;

@end

