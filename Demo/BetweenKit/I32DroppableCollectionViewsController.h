//
//  I32DroppableCollectionViewsController.h
//  BetweenKit
//
//  Created by Stephen Fortune on 21/12/2014.
//  Copyright (c) 2014 stephen fortune. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BetweenKit/UICollectionView+I3Collection.h>
#import <BetweenKit/I3DragDataSource.h>


@interface I32DroppableCollectionViewsController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate, I3DragDataSource>

@property (nonatomic, weak) IBOutlet UICollectionView *leftCollection;

@property (nonatomic, weak) IBOutlet UICollectionView *rightCollection;

@end