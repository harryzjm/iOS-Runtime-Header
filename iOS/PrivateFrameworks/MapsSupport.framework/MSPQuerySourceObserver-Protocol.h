//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPContainer, _MSPQueryState;
@protocol NSObject><NSCopying;

@protocol MSPQuerySourceObserver <NSObject>
- (void)_didChangeSourceWithNewState:(_MSPQueryState *)arg1 context:(id <NSObject><NSCopying>)arg2 inContainer:(MSPContainer *)arg3;
@end

