//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface LSSpotlightAction : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_unlocalizedTitle;
    NSString *_symbolImageName;
}

+ (_Bool)supportsSecureCoding;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(readonly, nonatomic) NSString *unlocalizedTitle; // @synthesize unlocalizedTitle=_unlocalizedTitle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToSpotlightAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 unlocalizedTitle:(id)arg2 symbolImageName:(id)arg3;
- (id)init;

@end
