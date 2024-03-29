//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSArray, NSDictionary, NSSet;

@interface NSError (DigitalSeparation)
+ (id)ds_errorFromIgnorableError:(id)arg1 sourceName:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *ds_localizedPermissionNames;
@property(readonly, copy, nonatomic) NSArray *ds_localizedAppNames;
@property(readonly, copy, nonatomic) NSDictionary *ds_underlyingErrorsBySource;
@end

