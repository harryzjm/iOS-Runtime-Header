//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCDocumentItem.h"

__attribute__((visibility("hidden")))
@interface BRCShareAcceptationDocumentFault : BRCDocumentItem
{
}

- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)markNeedsTransformIntoNormalFault;
- (void)deleteShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)arg1;
- (void)markLiveFromStageAsShareAcceptationFault;
- (id)asShareAcceptationFault;
- (_Bool)isShareAcceptationFault;
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 appLibrary:(id)arg4 clientZone:(id)arg5 sharingOptions:(unsigned long long)arg6;

@end

