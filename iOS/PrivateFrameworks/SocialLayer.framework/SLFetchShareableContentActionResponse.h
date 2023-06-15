//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SLShareableContentLoadResult;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentActionResponse
{
    SLShareableContentLoadResult *_result;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)responseWithResult:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SLShareableContentLoadResult *result; // @synthesize result=_result;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end

