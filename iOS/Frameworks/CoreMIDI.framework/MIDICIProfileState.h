//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MIDICIProfileState : NSObject <NSSecureCoding>
{
    NSArray *enabledProfiles;
    NSArray *disabledProfiles;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *disabledProfiles; // @synthesize disabledProfiles;
@property(readonly, nonatomic) NSArray *enabledProfiles; // @synthesize enabledProfiles;
- (void).cxx_destruct;
- (void)updateWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEnabledProfiles:(id)arg1 disabledProfiles:(id)arg2;

@end

