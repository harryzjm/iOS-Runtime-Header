//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSString;

@interface PSThirdPartyApp : NSObject
{
    NSString *_localizedName;
    LSApplicationProxy *_proxy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) LSApplicationProxy *proxy; // @synthesize proxy=_proxy;
- (id)description;
- (void)load;
- (id)localizedName;
- (id)initWithApplicationProxy:(id)arg1;

@end
