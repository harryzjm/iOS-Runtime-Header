//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentAction
{
    NSString *_requestedTypeIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestedTypeIdentifier; // @synthesize requestedTypeIdentifier=_requestedTypeIdentifier;
- (id)initWithSceneIdentifier:(id)arg1 requestedTypeIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

