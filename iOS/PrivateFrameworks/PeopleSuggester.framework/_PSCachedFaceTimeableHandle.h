//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _PSCachedFaceTimeableHandle : NSObject
{
    NSDate *_expirationDate;
    NSString *_handle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithExpirationDate:(id)arg1 handle:(id)arg2;

@end
