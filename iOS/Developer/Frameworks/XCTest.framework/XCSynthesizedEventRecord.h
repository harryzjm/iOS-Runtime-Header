//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)description;
@property(readonly) double maximumOffset;
- (void)addPointerEventPath:(id)arg1;
@property(readonly) NSArray *eventPaths;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)unsetInterfaceOrientation;
- (id)initWithName:(id)arg1 interfaceOrientation:(long long)arg2;
- (_Bool)synthesizeWithError:(id *)arg1;

@end
