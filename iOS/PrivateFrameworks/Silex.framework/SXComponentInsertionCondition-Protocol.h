//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray;
@protocol SXBlueprintMarker, SXComponent, SXComponentInsertionLayoutProvider;

@protocol SXComponentInsertionCondition <NSObject>
- (_Bool)validateMarker:(id <SXBlueprintMarker>)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg3;

@optional
- (void)insertedComponent:(id <SXComponent>)arg1 approximateLocation:(struct CGPoint)arg2;
- (void)prepareWithComponents:(NSArray *)arg1 layoutProvider:(id <SXComponentInsertionLayoutProvider>)arg2;
@end

