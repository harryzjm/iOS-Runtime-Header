//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface AMSMarketingItemActionComponent : NSObject
{
    NSDictionary *_rawValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *rawValues; // @synthesize rawValues=_rawValues;
@property(readonly, nonatomic) NSURL *artworkURL;
@property(readonly, nonatomic) NSString *description;
- (id)initWithDictionary:(id)arg1;

@end
