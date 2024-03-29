//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSSecureCoding-Protocol.h>

@class NSArray, XCTSourceCodeLocation;

@interface XCTSourceCodeContext : NSObject <NSSecureCoding>
{
    NSArray *_callStack;
    XCTSourceCodeLocation *_location;
}

+ (_Bool)supportsSecureCoding;
+ (id)_emphasizedImageNamesForSourceLocationInference;
+ (id)sourceCodeContextWithCallStackAddresses:(id)arg1 emphasizedSymbolName:(id)arg2;
+ (id)sourceCodeFramesFromCallStackReturnAddresses:(id)arg1;
- (void).cxx_destruct;
@property(readonly) XCTSourceCodeLocation *location; // @synthesize location=_location;
@property(readonly, copy) NSArray *callStack; // @synthesize callStack=_callStack;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)initWithCallStackAddresses:(id)arg1 location:(id)arg2;
- (id)initWithCallStack:(id)arg1 location:(id)arg2;

@end

