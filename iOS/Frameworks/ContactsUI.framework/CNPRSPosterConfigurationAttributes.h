//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSPosterConfigurationAttributes;

__attribute__((visibility("hidden")))
@interface CNPRSPosterConfigurationAttributes : NSObject
{
    PRSPosterConfigurationAttributes *_wrappedPosterAttributes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PRSPosterConfigurationAttributes *wrappedPosterAttributes; // @synthesize wrappedPosterAttributes=_wrappedPosterAttributes;
- (id)initWithCNConfiguration:(id)arg1;
@property(readonly, nonatomic) NSString *extensionIdentifier;

@end

