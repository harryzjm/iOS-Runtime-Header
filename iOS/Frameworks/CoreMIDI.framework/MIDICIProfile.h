//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface MIDICIProfile : NSObject <NSSecureCoding>
{
    NSString *name;
    NSData *profileID;
}

+ (_Bool)supportsSecureCoding;
+ (id)description;
@property(readonly, nonatomic) NSData *profileID; // @synthesize profileID;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (_Bool)isEqualTo:(id)arg1;
- (const void *)rawData;
- (id)description;
- (id)initWithData:(id)arg1 name:(id)arg2;
- (id)init;

@end

