//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent
{
    FBSUIApplicationLaunchResponse *_response;
}

@property(retain, nonatomic) FBSUIApplicationLaunchResponse *response; // @synthesize response=_response;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end
