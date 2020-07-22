//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSSet, XCElementSnapshot;

@interface XCTElementQueryResults : NSObject <NSSecureCoding>
{
    XCElementSnapshot *_rootElement;
    NSOrderedSet *_matchingElements;
    NSSet *_remoteElements;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSSet *remoteElements; // @synthesize remoteElements=_remoteElements;
@property(readonly, copy) NSOrderedSet *matchingElements; // @synthesize matchingElements=_matchingElements;
@property(readonly) XCElementSnapshot *rootElement; // @synthesize rootElement=_rootElement;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootElement:(id)arg1 matchingElements:(id)arg2 remoteElements:(id)arg3;

@end

