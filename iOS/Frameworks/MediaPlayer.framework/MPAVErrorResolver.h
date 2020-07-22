//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject
{
    id <MPAVErrorResolverDelegate> _delegate;
}

@property(nonatomic) __weak id <MPAVErrorResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;
- (void)resolveError:(id)arg1;

@end

