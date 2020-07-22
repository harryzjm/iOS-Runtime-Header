//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/IMEventListenerResponse-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse>
{
    _Bool _success;
    NSDictionary *_userInfo;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=didSucceed) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithSuccess:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

