//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISResourceProvider;

__attribute__((visibility("hidden")))
@interface ISTransparentIcon
{
    ISResourceProvider *_resourceProvider;
}

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
