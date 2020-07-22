//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/NSObject-Protocol.h>

@class NSString;

@protocol VNModelFile <NSObject>
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) const void *baseAddress;
- (void)advise:(long long)arg1;

@optional
@property(retain, nonatomic) NSString *resourcePath;
@end
