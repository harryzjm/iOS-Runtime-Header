//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8FMClient24VoiceAssistantSyncResult : NSObject
{
    MISSING_TYPE *devices;
    MISSING_TYPE *anchor;
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 anchor:(id)arg2;
@property(nonatomic, readonly) NSString *anchor; // @synthesize anchor;
@property(nonatomic, readonly) NSSet *devices; // @synthesize devices;

@end
