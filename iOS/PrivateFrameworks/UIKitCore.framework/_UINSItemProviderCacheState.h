//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UINSItemProviderCacheState : NSObject
{
    NSURL *_url;
    NSString *_typeIdentifier;
    NSDate *_expirationDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end

