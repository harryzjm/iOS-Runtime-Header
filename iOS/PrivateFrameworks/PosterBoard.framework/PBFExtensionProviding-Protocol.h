//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/PBFExtensionInstanceProviding-Protocol.h>

@class NSString, PRSServerPosterPath;
@protocol PRPosterExtensionDescribing;

@protocol PBFExtensionProviding <PBFExtensionInstanceProviding>
- (id <PRPosterExtensionDescribing>)providerForExtensionIdentifier:(NSString *)arg1;
- (id <PRPosterExtensionDescribing>)providerForPath:(PRSServerPosterPath *)arg1;
@end

