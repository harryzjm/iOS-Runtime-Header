//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@protocol NTKUpNextElementActionDelegate;

@interface NTKUpNextElementAction : NSObject <NSCopying>
{
    id <NTKUpNextElementActionDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didFinish:(_Bool)arg1;
- (void)_performWithContext:(id)arg1;
@property(nonatomic) __weak id <NTKUpNextElementActionDelegate> delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

