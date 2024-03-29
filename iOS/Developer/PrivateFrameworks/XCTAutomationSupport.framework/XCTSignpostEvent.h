//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSCopying-Protocol.h>
#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@interface XCTSignpostEvent : NSObject <NSCopying, NSSecureCoding>
{
    int _processID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignpostEvent:(id)arg1;
- (id)initWithProcessID:(int)arg1;

@end

