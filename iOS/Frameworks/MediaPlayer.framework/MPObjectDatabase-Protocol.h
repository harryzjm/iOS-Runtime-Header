//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPIdentifierSet, MPModelGenericObject, MPPropertySet;

@protocol MPObjectDatabase <NSObject>
- (MPModelGenericObject *)modelObjectMatchingIdentifierSet:(MPIdentifierSet *)arg1 propertySet:(MPPropertySet *)arg2 error:(id *)arg3;
- (MPIdentifierSet *)identifiersMatchingIdentifierSet:(MPIdentifierSet *)arg1 propertySet:(MPPropertySet *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
@end

