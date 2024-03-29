//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (MRAVAdditions)
@property(readonly, nonatomic) NSArray *mr_redactClusterMembers;
@property(readonly, nonatomic) NSArray *mr_allOutputDevices;
- (id)mr_arrayByRemovingLocalEndpoint;
- (_Bool)mr_isEqualToOutputDevicesArray:(id)arg1;
- (int)mr_ifDisabledWhyDisabled:(unsigned int)arg1;
- (_Bool)mr_isCommandSupportedAndEnabled:(unsigned int)arg1;
- (_Bool)mr_isCommandSupported:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *mr_formattedDebugDescription;
- (id)changeDescriptionTo:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3 descriptionBlock:(CDUnknownBlockType)arg4;
- (id)mr_compactMap:(CDUnknownBlockType)arg1;
- (id)mr_flatMap:(CDUnknownBlockType)arg1;
- (id)mr_map:(CDUnknownBlockType)arg1;
- (id)mr_filter:(CDUnknownBlockType)arg1;
- (_Bool)mr_containsAnyOf:(id)arg1;
- (id)mr_first:(CDUnknownBlockType)arg1;
- (_Bool)mr_all:(CDUnknownBlockType)arg1;
- (_Bool)mr_any:(CDUnknownBlockType)arg1;
@end

