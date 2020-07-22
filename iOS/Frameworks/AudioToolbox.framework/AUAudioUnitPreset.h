//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding>
{
    long long _number;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

