//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSSecureCoding-Protocol.h>

@interface CLKComplicationTemplateAuxilaryInfo : NSObject <NSSecureCoding>
{
    _Bool _supportsComplicationForegroundModifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsComplicationForegroundModifier; // @synthesize supportsComplicationForegroundModifier=_supportsComplicationForegroundModifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
