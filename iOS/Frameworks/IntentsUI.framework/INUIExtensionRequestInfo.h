//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IntentsUI/NSCopying-Protocol.h>
#import <IntentsUI/NSSecureCoding-Protocol.h>

@class INInteraction;

@interface INUIExtensionRequestInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requiresUserConsent;
    INInteraction *_interaction;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1;

@end

