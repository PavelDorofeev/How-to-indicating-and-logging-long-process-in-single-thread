#ifndef QP_VERSIONS_HISTORY_H
#define QP_VERSIONS_HISTORY_H

// this file starts from version 2.0.0

/*
 we have free opensource kit for developing Qt tables
    qp_abstractitemview.h
    qp_abstractitemview_p.h
    qp_common.h
    qp_horheaderview.h
    qp_horheaderview_p.h
    qp_tableview.h
    qp_tableview_p.h
    qp_vertheaderview.h
    qp_vertheaderview_p.h

We dont building our sources together with Qt sources anymore.
i.e. it is not nessasery rebuildint gui branch of qt sources.

Now we are including our qp files at any project and building conveniently as usual .

2.0.0

    Resizing columns(xNums) and lines for all cells
2.1.0

    repaire scroll x
2.1.1
    repaire resizing x when scroll x is presents
2.1.2
    repair mouse move cursor image (shape) when scrolling x is presents
2.1.3

    add section number: for labels are values ( < -2 ) and for field model number values ( >0 )
    creating new containers and remove some old
2.2.0
    remove 'lines' parameter
    we forget connecting the signal rowsRemoved(QModelIndex,int,int) into QpTableView for use with sql data model rows changed
    repaire some errors with repaint vertical header on data model was changed
    repaire some signal/slots connections into QpVerHeaderView and QpTableView
2.3.0
    add QpHorHeaderView::sectionsTmplChanged() signal for connecting to QpVertHeaderView::slot_sectionsTmplChanged() slot that do QpVertHeaderView::initializeSections()
2.4.0
    reparing some error
    repainting after sections template lines number changed
    add method resizeSectionsByHeaderData (working for one line horizontal header)
2.4.1
    repaire errors into method QpVertHeaderView::sectionsInserted
2.4.2
    add stretchLastSection funtionality
2.4.3
    remove resizeSectionsByHeaderData and restore method resizeColumnsToContents()
    forget sectionResized( signal to make
    we are stupid : remove //QHash< int , qp::db::CELL_STYLE> stls; in QpTableViewPrivate - this is duplicate container
        and QHash< QPair<int,int> , qp::db::CELL_STYLE> cell_styles; duplicate too
    changed QpTableView ctor, removes matrix parameter !
    globalResizeMode
2.5.0

*/


#endif // QP_VERSIONS_HISTORY_H
