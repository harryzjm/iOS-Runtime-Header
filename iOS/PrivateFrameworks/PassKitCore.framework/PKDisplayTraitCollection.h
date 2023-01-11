//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDisplayTraitCollection : NSObject <NSSecureCoding>
{
    double _canvasScale;
    struct CGSize _canvasSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double canvasScale; // @synthesize canvasScale=_canvasScale;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultTraits;
- (id)init;

@end
